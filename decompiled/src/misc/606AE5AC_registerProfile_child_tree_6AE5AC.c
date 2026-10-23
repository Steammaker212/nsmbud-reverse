/* registerProfile_child_tree_6AE5AC
 * address: 0x606AE5AC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_child_tree_6AE5AC()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-28h] BYREF

  dword_60CBA234 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA238 = (int)"obj_yashi";
  dword_60CBA23C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA240 = (int)"obj_yashi_sabaku";
  sub_60000288();
  dword_60CBA244 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA248 = (int)"obj_yashi";
  dword_60CBA24C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA250 = (int)"obj_yashi_sabaku";
  sub_60000288();
  dword_60CBA27C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA280 = (int)"obj_yashi_wait";
  dword_60CBA284 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA288 = (int)"obj_yashi_normal";
  dword_60CBA28C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA290 = (int)"obj_yashi_hipD";
  dword_60CBA294 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA298 = (int)"obj_yashi_sabaku_wait";
  dword_60CBA29C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA2A0 = (int)"obj_yashi_sabaku_normal";
  dword_60CBA2A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA2A8 = (int)"obj_yashi_sabaku_hipD";
  sub_60000288();
  dword_60CBA254 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA258 = (int)"joint0";
  dword_60CBA25C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA260 = (int)"joint1";
  dword_60CBA264 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA268 = (int)"joint2";
  dword_60CBA26C = (int)&sead__SafeStringBase__vtable;
  dword_60CBA270 = (int)"joint3";
  dword_60CBA274 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA278 = (int)"joint4";
  sub_60000288();
  v1.vtable = &sead__SafeStringBase__vtable;
  dword_60CBA230[0] = 0x20000000;
  v1.cstr = (char *)&unk_60AD7552;
  Profile__ctor(&stru_60CBA204, Actor_child_tree_build, 0xBEu, &v1, &stru_60B08644, 2);
  *result = &off_60C1AC98;
  return result;
}
