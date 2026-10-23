/* sub_6046CC88
 * address: 0x6046CC88   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046CC88(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  float *v4; // r2
  int *v5; // r1

  FIELD_U32(a1, 6860) = 0;
  v2 = (_DWORD *)(a1 + 6860);
  FIELD_U32(a1, 6840) = 4;
  FIELD_U8(a1, 6856) = 1;
  FIELD_U32(a1, 6844) = 0;
  FIELD_U32(a1, 136) = -1078774989;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 1023410176;
  FIELD_U32(a1, 104) = 1023410176;
  v3 = sub_60465D48();
  v4 = (float *)dword_60AF2158;
  if ( v3 )
    v4 = flt_60AF1EA0;
  FIELD_F32(a1, 132) = v4[*v2];
  FIELD_U32(a1, 116) = 1165623296;
  v5 = dword_6046CD70;
  if ( FIELD_U8(a1, 6857) )
    v5 = &dword_6046CD70[1];
  FIELD_U32(a1, 136) = *v5;
  FIELD_U32(a1, 100) = 1023410176;
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
}
