using UnityEngine;

/// <summary>
/// Container for easy transfer of input data from object to object
/// </summary>
public struct InputData
{
	public bool InputChanged { get; private set; }

	public Vector2 MoveDelta { get => MoveDelta; set { InputChanged = true; MoveDelta = value; } }
	public Vector2 LookDelta { get => LookDelta; set { InputChanged = true; LookDelta = value; } }
}
