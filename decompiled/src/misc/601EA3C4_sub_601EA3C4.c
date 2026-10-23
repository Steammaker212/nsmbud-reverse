/* sub_601EA3C4
 * address: 0x601EA3C4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EA3C4(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int v5; // r5
  _DWORD v7[20]; // [sp+0h] [bp-B0h] BYREF
  _DWORD v8[24]; // [sp+50h] [bp-60h] BYREF

  v8[0] = 0;
  memset(&v8[2], 0, 72);
  sub_601905DC(v8);
  v8[0] = a2;
  v8[1] = sub_601916C8(dword_60C8996C, a2);
  if ( a2 == 100 )
  {
    v3 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(909);
    if ( ((unsigned int)dword_60C8AF58 & ~(1612620856 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C8AF58) )
    {
      dword_60C8AF54 = (int)&off_60BD4E08;
      _cxa_guard_release(dword_60C8AF58);
    }
    v5 = (int)(v3 + 2);
    if ( !(**v3)(v3, &dword_60C8AF54) )
      v5 = 8;
    v8[5] = *(_DWORD *)v5;
    v7[0] = 0;
    memset(&v7[2], 0, 72);
    sub_601905DC(v7);
    v7[0] = 109;
    v7[1] = sub_601916C8(dword_60C8996C, 109);
    sub_60191160((_DWORD *)dword_60C8996C, v7);
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v8);
}
