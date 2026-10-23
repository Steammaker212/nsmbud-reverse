/* sub_601D0F08
 * address: 0x601D0F08   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D0F08()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r6
  int v3; // r5
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12
  _DWORD v7[24]; // [sp+0h] [bp-60h] BYREF

  v7[0] = 0;
  memset(&v7[2], 0, 72);
  sub_601905DC(v7);
  v7[0] = 94;
  v7[1] = sub_601916C8(dword_60C8996C, 94);
  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(907);
  if ( ((unsigned int)dword_60C8A5E4 & ~(1612517236 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8A5E4) )
  {
    dword_60C8A5E0 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C8A5E4);
  }
  v2 = (int)(v0 + 2);
  v3 = 8;
  if ( !(**v0)(v0, &dword_60C8A5E0) )
    v2 = 8;
  v7[4] = *(_DWORD *)v2;
  v4 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(906);
  if ( ((unsigned int)dword_60C89C94 & ~(1612517380 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C89C94) )
  {
    dword_60C89C90 = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C89C94);
  }
  if ( (**v4)(v4, &dword_60C89C90) )
    v3 = (int)(v4 + 2);
  v7[5] = *(_DWORD *)v3;
  return sub_60191160((_DWORD *)dword_60C8996C, v7);
}
