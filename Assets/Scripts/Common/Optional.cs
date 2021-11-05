using System;
using UnityEngine;

namespace Nugget.Scripts.Common
{
    // Basically carbon-copied with minor differences from aarthificial's "Optional Variables - Unity Tips [2020.1+]" video (https://www.youtube.com/watch?v=uZmWgQ7cLNI)

    [Serializable]
    public struct Optional<T> : IEquatable<T>, IEquatable<Optional<T>> //TODO this could use a bit better of a name, as it is not an "optional" parameter at this point but instead references an object that may or may not have a value set
    {
        /// <summary>
        /// Represents an optional which does not contain a valid instance of <typeparamref name="T"/>
        /// </summary>
        public static Optional<T> Empty => new Optional<T> { enabled = false };

        public bool Enabled => enabled;
        public T Value => value;

#pragma warning disable IDE0044 // Add readonly modifier; Fields need not be readonly so they can be alterred in the Unity editor
        [SerializeField, HideInInspector]
        private bool enabled;

        [SerializeField, HideInInspector]
        private T value;
#pragma warning restore IDE0044 // Add readonly modifier

        public Optional(T value)
        {
            this.value = value;
            enabled = true;
        }

        public bool Equals(T other)
        {
            if (enabled) return value.Equals(other);

            return false;
        }
        public bool Equals(Optional<T> other)
        {
            if (enabled) return value.Equals(other.Value);

            return false;
        }

        public static implicit operator bool(Optional<T> optional) => optional.Enabled;
        public static implicit operator T(Optional<T> optional) => optional.Value;
    }
}