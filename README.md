# Object Pooling and Profiling

To showcase the effects of spawning and destroying objects, I used my GDW tutorial project since it uses a similar system and shows a practical use case.

Here is the profiler of that test:

![Spawned&Destroyed Object Profiling](<Screenshot 2026-11-14 161829.png>)

From the profiling image, the green cells highlighted showcase every time the spawn function was called. As you can see, it is constant and causes performance jumps in the profiler above. 

Though it isn't very costly for a smaller project like the one I've made, when implemented in a much more costly project like a AAA or professional Indie game, it can be costly and impact both performance and immersion.

And object pooling is the solution to this problem. 

![Profiling of Object Pool Spawning](<Screenshot 2026-11-15 201841.png>)

Unfortunately I never got the pooling system to work in the sense of putting the objects back into the pool and deactivating them, you can easily see the performance improvements with one spawn call which spawns 5 instances, and constant spawn calls only spawning one object.

The running performance also improves with only one small spike in the profiler window before returning to a consistent frame rate.

![Image of the number of spawned objects](<Screenshot 2026-11-15 201858.png>)

The image above shows the number of spawned cubes being limited to 5.

(I'm going to keep working on the project tonight and see if I can get it to work, if I do I'll update the Readme with screenshots)

## Below are the blueprints for each class and function

### Object Pool:
------------ 
Event Graph

![alt text](<Screenshot 2026-11-15 203611.png>)

Despawn

![alt text](<Screenshot 2026-11-15 203621.png>)

Return Actor

![alt text](<Screenshot 2026-11-15 203626.png>)

GetPooledObject

![alt text](<Screenshot 2026-11-15 203638.png>)

Initialize Pool

![alt text](<Screenshot 2026-11-15 203657.png>)

### BP_PooledActor
------------ 
Event Graph

![alt text](<Screenshot 2026-11-15 203708.png>)

### BP_PooledCube
------------ 
Event Graph

![alt text](<Screenshot 2026-11-15 203716.png>)

### Level BP
------------ 

![alt text](<Screenshot 2026-11-15 204200.png>)
![alt text](<Screenshot 2026-11-15 204215.png>)
![alt text](<Screenshot 2026-11-15 204220.png>)