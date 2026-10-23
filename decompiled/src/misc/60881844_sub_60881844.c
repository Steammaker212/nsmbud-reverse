/* sub_60881844
 * address: 0x60881844   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881844(int a1, int a2, int a3, int a4, int (__fastcall *a5)(int *))
{
  int v9; // r9
  int v10; // r0
  int v11; // r7
  int v13[9]; // [sp+Ch] [bp-24h] BYREF

  if ( FIELD_F32(a1, 64) <= 0.0 )
  {
    if ( sub_60880930(a2, a3) == 1 )
    {
      sub_60898D38(FIELD_U32(a2, 132), a2);
      sub_60898C50(FIELD_U32(a2, 132), a2);
      sub_6089AB20(FIELD_U32(a2, 132), a2, FIELD_F32(a1, 64), FIELD_F32(a1, 64));
    }
    sub_60881E38(a1 + 348, a2);
    v11 = 1;
    goto LABEL_23;
  }
  v9 = *(unsigned __int8 *)(FIELD_U32(a1, 24) + 29);
  if ( a5 )
  {
    v13[0] = a2;
    v10 = a5(v13);
    if ( v10 == 1 )
      return 1;
    if ( v10 == 2 && !FIELD_U8(a2, 1060) )
      FIELD_U8(a2, 1060) = 1;
  }
  if ( FIELD_U32(a2, 60) )
  {
    FIELD_U32(a2, 72) = FIELD_U32(a1, 64);
    if ( sub_60880930(a2, a3) == 1 )
    {
      sub_60898D38(FIELD_U32(a2, 132), a2);
      sub_60898C50(FIELD_U32(a2, 132), a2);
      sub_6089AB20(FIELD_U32(a2, 132), a2, FIELD_F32(a1, 64), FIELD_F32(a1, 64));
    }
    sub_60881E38(a1 + 348, a2);
    ++FIELD_U32(a1, 356);
LABEL_21:
    v11 = 1;
    goto LABEL_22;
  }
  v11 = 0;
  if ( sub_608993D8(
         FIELD_U32(a2, 132),
         a2,
         a3,
         FIELD_U8(a1, 5) != 0,
         FIELD_F32(a1, 64),
         FIELD_U8(a1, 10) == 0,
         a4) == 1 )
  {
    if ( v9
      && *(_BYTE *)(FIELD_U32(a2, 136) + 1874) == 2
      && (FIELD_S32(a2, 40) > 0 || *(_DWORD *)(FIELD_U32(a2, 348) + 580)) )
    {
      sub_60890938(FIELD_U32(a1, 24), a2);
    }
    sub_60881E38(a1 + 348, a2);
    goto LABEL_21;
  }
LABEL_22:
  ++FIELD_U32(a1, 344);
LABEL_23:
  FIELD_U32(a1, 512) |= 1 << FIELD_U32(a2, 720);
  if ( sub_608809BC(a2) )
    FIELD_U32(a1, 48) |= 1 << FIELD_U32(a2, 720);
  if ( sub_60880A4C(a2) )
    FIELD_U32(a1, 52) |= 1 << FIELD_U32(a2, 720);
  return v11 ^ 1;
}
