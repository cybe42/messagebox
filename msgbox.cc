#include <napi.h>
#include <string>
#include <windows.h>

using namespace Napi;

void msgExclamation(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONEXCLAMATION|MB_OK);
}
void msgError(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONERROR|MB_OK);
}
void msgInformation(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONINFORMATION|MB_OK);
}
void msgWarning(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONWARNING|MB_OK);
}
void msgQuestion(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONQUESTION|MB_OK);
}
void msgAsterisk(const CallbackInfo& info) {
  Env env = info.Env();
  std::string stw = info[0].ToString().Utf8Value();
  const char* ww = stw.c_str();
  std::string stt = info[1].ToString().Utf8Value();
  const char* wt = stt.c_str();
  MessageBox(NULL,ww,wt,MB_ICONASTERISK|MB_OK);
}

Napi::Object Init(Napi::Env env, Object exports) {
  exports["exclamation"] = Function::New(env, msgExclamation);
  exports["error"] = Function::New(env, msgError);
  exports["information"] = Function::New(env, msgInformation);
  exports["warning"] = Function::New(env, msgWarning);
  exports["question"] = Function::New(env, msgQuestion);
  exports["asterisk"] = Function::New(env, msgAsterisk);
  return exports;
}

NODE_API_MODULE(msgbox, Init)