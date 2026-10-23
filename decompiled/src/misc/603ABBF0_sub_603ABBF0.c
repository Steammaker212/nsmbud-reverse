/* sub_603ABBF0
 * address: 0x603ABBF0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ABBF0(int a1)
{
  int v2; // r0
  int v3; // r2
  _WORD *v4; // r1
  unsigned int v5; // r0
  __int64 v6; // r0

  v2 = sub_603ADD84(a1);
  if ( v2 )
    v4 = (_WORD *)((float)(FIELD_F32(v2, 108) - FIELD_F32(a1, 108)) < 0.0);
  else
    v4 = 0;
  v5 = FIELD_U32(a1, 80);
  if ( (_WORD *)v5 != v4 )
  {
    v4 = (_WORD *)(a1 + 6674);
    v3 = FIELD_U16(a1, 6674);
    if ( !FIELD_U16(a1, 6674) )
    {
      v3 = 1;
      *v4 = 1;
      FIELD_U32(a1, 80) = v5 ^ 1;
    }
  }
  sub_603ADC3C(a1, v4, v3);
  FIELD_U16(a1, 6676) = 16;
  FIELD_U32(a1, 6924) = (10 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  v6 = 10LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  if ( (v6 & 0xF00000000LL) == 0 )
  {
    FIELD_U32(a1, 6924) += 10;
    LODWORD(v6) = a1 + 6924;
  }
  return v6;
}
