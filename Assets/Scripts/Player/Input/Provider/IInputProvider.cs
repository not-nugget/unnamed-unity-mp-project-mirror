namespace Nugget.Project.Scripts.Player.Input
{
    public interface IInputProvider
    {
        public IInputState GetState(); //This should be a method, as it indicates a proccess needs to occur before the state is returned, whereas a property indicates it is raw data
    }
}
