namespace Nugget.Scripts.Player.Input.Interfaces
{
    public interface IInputMiddleware
    {
        public InputState Process(InputState inputState);
    }
}
