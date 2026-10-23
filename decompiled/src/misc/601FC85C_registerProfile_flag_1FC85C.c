/* registerProfile_flag_1FC85C
 * address: 0x601FC85C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_flag_1FC85C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C8C110 = 0;
  dword_60C8C114 = 0;
  dword_60C8C118 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1D3D;
  Profile__ctor(&stru_60C8C0EC, Actor_flag_build, 0x370u, &v2, 0, 0);
  *v0 = &off_60BD81B0;
  dword_60C8C11C = 1065353216;
  dword_60C8C120 = 1065353216;
  dword_60C8C124 = 1065353216;
  dword_60C8C128 = 0;
  dword_60C8C12C = 0;
  dword_60C8C130 = 0;
  return 1065353216;
}
