using UnityEngine;

/// <summary>
/// Container for easy transfer of input data from object to object
/// </summary>
public struct InputData
{
	public bool InputChanged { get; private set; }

	private Vector2 moveDelta;
	public Vector2 MoveDelta { get => moveDelta; set { InputChanged = true; moveDelta = value; } }

	private Vector2 lookDelta;
	public Vector2 LookDelta { get => lookDelta; set { InputChanged = true; lookDelta = value; } }
}
