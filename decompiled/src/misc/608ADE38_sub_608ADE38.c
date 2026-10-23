/* sub_608ADE38
 * address: 0x608ADE38   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ADE38(int a1, int a2, int a3)
{
  int v4; // r4
  void *v5; // r0
  _BYTE v7[8]; // [sp+8h] [bp-40h] BYREF
  int v8; // [sp+10h] [bp-38h]
  int v9; // [sp+14h] [bp-34h]
  _DWORD v10[10]; // [sp+20h] [bp-28h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  memset(&v10[2], 0, 16);
  sub_608ADEC0(v7, a1, v10);
  v4 = ((int (__fastcall *)(_DWORD, int, _BYTE *))loc_608AD6C4)(0, a1, v7);
  if ( v4 == 1 )
  {
    v5 = sub_608065A0();
    ((void (__fastcall *)(void *, void *, int, int, int))loc_608B5668)(v5, &unk_60CC8CF4, v8, v9, 1);
  }
  return v4;
}
