using Nugget.Scripts.Common;
using UnityEditor;
using UnityEngine;

namespace Nugget.Editor.Common
{
    // Basically carbon-copied with minor differences from aarthificial's "Optional Variables - Unity Tips [2020.1+]" video (https://www.youtube.com/watch?v=uZmWgQ7cLNI)

    [CustomPropertyDrawer(typeof(Optional<>))]
    public class OptionalPropertyDrawer : PropertyDrawer
    {
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            var valueProperty = property.FindPropertyRelative("value");
            return EditorGUI.GetPropertyHeight(valueProperty);
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var hasValueProperty = property.FindPropertyRelative("enabled");
            var valueProperty = property.FindPropertyRelative("value");

            position.width -= 24;

            EditorGUI.BeginDisabledGroup(!hasValueProperty.boolValue);
            EditorGUI.PropertyField(position, valueProperty, label, true);
            EditorGUI.EndDisabledGroup();

            position.x += position.width + 24;
            position.width = position.height = EditorGUI.GetPropertyHeight(hasValueProperty);
            position.x -= position.width;
            EditorGUI.PropertyField(position, hasValueProperty, GUIContent.none);
        }
    }
}
