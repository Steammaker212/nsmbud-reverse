/* sub_606EF368
 * address: 0x606EF368   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EF368(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int (*v4)(); // r2
  __guard *v5; // r0
  __guard v6; // r1
  __guard v7; // r0

  if ( ((unsigned int)dword_60CBC1D0 & ~(1617884032 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CBC1D0) )
  {
    dword_60CBC1D0[1] = 1098907648;
    dword_60CBC1D0[2] = 0;
    dword_60CBC1DC = 1098907648;
    dword_60CBC1E0 = -1048576000;
    dword_60CBC1E4 = 0;
    dword_60CBC1E8 = 0;
    dword_60CBC1EC = 1098907648;
    dword_60CBC1F0 = 0;
    _cxa_guard_release(dword_60CBC1D0);
  }
  v3 = FIELD_U32(a1, 20);
  v4 = off_60C20074[2 * (v3 & 3)];
  FIELD_U32(a1, 80) = v3 & 3;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 684) = v4;
  FIELD_U32(a1, 688) = off_60C20074[2 * (v3 & 3) + 1];
  FIELD_U32(a1, 672) = HIWORD(v3) & 0xF;
  FIELD_U8(a1, 680) = (v3 & 0x100000) != 0;
  FIELD_U32(a1, 664) = HIBYTE(v3) & 0xF;
  FIELD_U8(a1, 660) = 1;
  v5 = &dword_60CBC1D0[2 * (v3 & 3)];
  v6 = v5[1];
  v7 = v5[2];
  FIELD_U32(a1, 572) = v6;
  FIELD_U32(a1, 576) = v7;
  FIELD_U32(a1, 580) = 0;
  return 1;
}
