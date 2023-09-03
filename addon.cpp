#include <node.h>

namespace demo {

    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Number;
    using v8::Value;

    // Define a function to add two numbers
    void Add(const FunctionCallbackInfo<Value>& args) {
      // Something
    }

    // Initialize the module
    void Init(Local<Object> exports, Local<Object> module) {
        NODE_SET_METHOD(exports, "add", Add);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Init)

}  // namespace demo
