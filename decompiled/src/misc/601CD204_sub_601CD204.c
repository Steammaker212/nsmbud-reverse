/* sub_601CD204
 * address: 0x601CD204   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CD204(int a1)
{
  int v2; // r9
  unsigned int v3; // r0
  unsigned int v4; // r11
  int v5; // r0
  int i; // r2
  int v7; // r7
  int v8; // r7
  const char *v9; // r10
  int v10; // r1
  int j; // r2
  _DWORD *v12; // r0
  float *v13; // r0
  unsigned int v14; // r0
  int result; // r0
  int v16; // [sp+0h] [bp-50h]
  int (**v17)(); // [sp+Ch] [bp-44h] BYREF
  const char *v18; // [sp+10h] [bp-40h]
  int v19; // [sp+14h] [bp-3Ch] BYREF
  int v20; // [sp+18h] [bp-38h]
  int v21; // [sp+1Ch] [bp-34h]
  _DWORD v22[12]; // [sp+20h] [bp-30h] BYREF

  memset(v22, 255, 12);
  v16 = a1 + 1032;
  v2 = sub_601DFFE4(a1 + 1032);
  v3 = 0;
  while ( 1 )
  {
    v4 = v3;
    v19 = FIELD_U32(a1, 1032);
    v20 = FIELD_U32(a1, 1036);
    v21 = FIELD_U32(a1, 1040);
    if ( sub_60178694(v2, v3) )
      break;
LABEL_15:
    v3 = v4 + 1;
    if ( (int)(v4 + 1) >= 6 )
      goto LABEL_18;
  }
  v5 = a1;
  for ( i = v4; ; i = v7 )
  {
    v7 = sub_601D84D4(v5, &v19, i, v22, v16);
    if ( v7 == 6 )
      break;
    sub_6019EC34(&v19, v22);
    v5 = a1;
  }
  v8 = sub_601DFFE4(v22);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "W8B1";
  (*(void (__fastcall **)(int))(FIELD_U32(v8, 4) + 12))(v8 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(v8, 4) + 12))(v8 + 4);
  v9 = *(const char **)(v8 + 8);
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  if ( v9 != v18 )
  {
    v10 = FIELD_U32(v8, 8);
    for ( j = 1; *(unsigned __int8 *)(v10 + j - 1) == (unsigned __int8)v18[j - 1]; j += 2 )
    {
      if ( !*(_BYTE *)(v10 + j - 1) )
        goto LABEL_17;
      if ( j > 0x80000 || *(unsigned __int8 *)(v10 + j) != (unsigned __int8)v18[j] )
        break;
      if ( !*(_BYTE *)(v10 + j) )
        goto LABEL_17;
    }
    goto LABEL_15;
  }
LABEL_17:
  FIELD_U32(a1, 1144) = sub_601E1370(v4);
LABEL_18:
  v12 = (_DWORD *)sub_601E039C(v16, v4);
  v19 = v12[21];
  v20 = v12[22];
  v21 = v12[24];
  v13 = (float *)sub_601E0040(&v19);
  v14 = sub_6000F7B8(*v13 - FIELD_F32(a1, 80), v13[2] - FIELD_F32(a1, 88));
  FIELD_U32(a1, 192) = v14;
  FIELD_U32(a1, 180) = v14;
  FIELD_U32(a1, 1000) = v14;
  FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
  sub_601B1FA4(a1, &stru_60C8A908);
  result = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 124) = 8;
  return result;
}
