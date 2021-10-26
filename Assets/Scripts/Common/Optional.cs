using System;

namespace Nugget.Scripts.Common
{
    // Basically carbon-copied with minor differences from aarthificial's "Optional Variables - Unity Tips [2020.1+]" video (https://www.youtube.com/watch?v=uZmWgQ7cLNI)

    [Serializable]
    public struct Optional<T> : IEquatable<T>, IEquatable<Optional<T>>
    {
        public bool HasValue => hasValue;
        public T Value => value;

#pragma warning disable IDE0044 // Add readonly modifier; Fields need not be readonly so they can be alterred in the Unity editor
        private bool hasValue;
        private T value;
#pragma warning restore IDE0044 // Add readonly modifier

        public Optional(T value)
        {
            this.value = value;
            hasValue = true;
        }

        public bool Equals(T other)
        {
            if (hasValue) return value.Equals(other);

            return false;
        }
        public bool Equals(Optional<T> other)
        {
            if (hasValue) return value.Equals(other.Value);

            return false;
        }

        public static implicit operator bool(Optional<T> optional) => optional.HasValue;
        public static implicit operator T(Optional<T> optional) => optional.Value;
    }
}