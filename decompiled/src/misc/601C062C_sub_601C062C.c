/* sub_601C062C
 * address: 0x601C062C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C062C(__n64 *a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  unsigned __int32 *v4; // r0
  __n64 *v5; // r9
  unsigned __int32 v6; // s2
  _DWORD *v7; // r6
  char *v8; // r0
  int i; // r2
  unsigned __int32 v10; // r0
  _DWORD *v11; // r5
  char *v12; // r0
  int j; // r2
  __int8 *v14; // r5
  unsigned __int32 *v15; // r0
  int v17; // [sp+4h] [bp-2Ch] BYREF
  int v18; // [sp+8h] [bp-28h]
  int v19; // [sp+Ch] [bp-24h]

  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v3 = sub_6040E300(FIELD_U8(dword_60CC6D78, 440));
  if ( sub_601916F4(dword_60C8996C) == 1 )
  {
    sub_6019EC34(&a1[135].n64_u32[1], v2 + 258);
    v4 = (unsigned __int32 *)sub_601E0040(&a1[135].n64_u8[4]);
    FIELD_U32(a1 + (123) * 8, 0x0)[0] = *v4;
    FIELD_U32(a1 + (123) * 8, 0x0)[1] = v4[1];
    FIELD_U32(a1 + (124) * 8, 0x0)[0] = v4[2];
    v5 = a1 + 33;
    FIELD_U64(a1 + (10) * 8, 0x0)[0] = sub_601BA56C((int)a1, (float *)&a1[123], v2[45]).n64_u64[0];
    FIELD_U32(a1 + (11) * 8, 0x0)[0] = v6;
  }
  else
  {
    v5 = a1 + 33;
    if ( v3 | ((FIELD_U32(a1 + (33) * 8, 0x0)[0] | 1) != 7) )
    {
      v17 = -1;
      v18 = -1;
      v19 = -1;
      sub_6019EC34(&v17, v2 + 258);
      v7 = (_DWORD *)sub_601E0010(&v17);
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      v8 = (char *)v7[1];
      if ( v8 != "W8B0" )
      {
        for ( i = 0; i < 524289; ++i )
        {
          if ( v8[i] != aW8b0[i] )
            break;
          if ( !v8[i] )
            goto LABEL_10;
        }
        v2 = (_DWORD *)sub_6019172C(dword_60C8996C);
      }
LABEL_10:
      FIELD_U32(a1 + (10) * 8, 0x0)[0] = v2[20];
      FIELD_U32(a1 + (10) * 8, 0x0)[1] = v2[21];
      v10 = v2[22];
    }
    else
    {
      v17 = -1;
      v18 = -1;
      v19 = -1;
      sub_6019EC34(&v17, v2 + 258);
      v11 = (_DWORD *)sub_601E0010(&v17);
      (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
      (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
      v12 = (char *)v11[1];
      if ( v12 == "W6C1" )
      {
LABEL_17:
        v14 = &a1[135].n64_i8[4];
        sub_6019EC34(&a1[135].n64_u32[1], (_DWORD *)(dword_60CC6D78 + 468));
      }
      else
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( v12[j] != aW6c1[j] )
            break;
          if ( !v12[j] )
            goto LABEL_17;
        }
        v14 = &a1[135].n64_i8[4];
      }
      v15 = (unsigned __int32 *)sub_601E0040(v14);
      FIELD_U32(a1 + (10) * 8, 0x0)[0] = *v15;
      FIELD_U32(a1 + (10) * 8, 0x0)[1] = v15[1];
      v10 = v15[2];
    }
    FIELD_U32(a1 + (11) * 8, 0x0)[0] = v10;
  }
  if ( (FIELD_U32(v5, 0x0)[0] | 1) == 7 )
    a1[138].n64_u32[1] |= 0x80000u;
  return sub_601C503C(a1);
}
