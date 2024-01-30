"""."""

import testmod
from myPower import power

print(power.__dir__())


print(list(i for i in testmod.fib(10)))

print(power.thing(2, 3))
print(power.thing.__doc__)
