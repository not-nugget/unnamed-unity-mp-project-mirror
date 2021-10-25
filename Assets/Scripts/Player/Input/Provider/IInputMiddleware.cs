namespace Nugget.Project.Scripts.Player.Input
{
    public interface IInputMiddleware
    {
        public IInputState Process(IInputState inputState);
    }
}
