// Load the module
mymod <- ::importModule("libxyModuleExample.dylib", {});

print(mymod.hello()); // Will print "Hello Squirrel Module!"