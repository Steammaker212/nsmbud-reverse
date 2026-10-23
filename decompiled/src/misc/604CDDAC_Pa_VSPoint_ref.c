/* Pa_VSPoint_ref
 * address: 0x604CDDAC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_VSPoint_ref(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  if ( ((unsigned int)&dword_60CA4D00[2] & ~(1615650248 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[2]) )
  {
    dword_60CA4E38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E3C = (int)"Pa_VSPoint_00";
    dword_60CA4E40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E44 = (int)"Pa_VSPoint_01";
    dword_60CA4E48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E4C = (int)"Pa_VSPoint_02";
    dword_60CA4E50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E54 = (int)"Pa_VSPoint_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[2]);
  }
  v3 = operator_new(0xDF4u);
  a1[5012] = sub_6050CDB4(v3);
  sub_6050CE38();
  v4 = operator_new(0xDF4u);
  a1[5013] = sub_6050CDB4(v4);
  sub_6050CE38();
  v5 = operator_new(0xDF4u);
  a1[5014] = sub_6050CDB4(v5);
  sub_6050CE38();
  v6 = operator_new(0xDF4u);
  a1[5015] = sub_6050CDB4(v6);
  return sub_6050CE38();
}
