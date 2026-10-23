/* sub_6018D8A0
 * address: 0x6018D8A0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018D8A0(_DWORD *a1, int a2, unsigned int a3)
{
  int v4; // r6
  int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  signed int v8; // r3
  int v9; // r0
  int v10; // r0
  signed int v11; // r3
  const char **v12; // r10
  char v13; // r4
  int i; // r11
  int v15; // r0
  int v16; // r5
  int v17; // r0
  int result; // r0
  int v19; // [sp+0h] [bp-80h]
  int v21; // [sp+8h] [bp-78h]
  _DWORD *v22; // [sp+Ch] [bp-74h]
  unsigned int v23; // [sp+10h] [bp-70h]
  int v25; // [sp+18h] [bp-68h]
  _DWORD v26[2]; // [sp+1Ch] [bp-64h] BYREF
  _DWORD v27[3]; // [sp+24h] [bp-5Ch] BYREF
  int (**v28)(); // [sp+30h] [bp-50h] BYREF
  int *v29; // [sp+34h] [bp-4Ch]
  int v30; // [sp+38h] [bp-48h]
  int v31; // [sp+3Ch] [bp-44h] BYREF

  v4 = FIELD_U32(dword_60CC6D78, 428);
  v5 = FIELD_U32(dword_60CC6D78, 432);
  v6 = FIELD_U32(dword_60CC6D78, 436);
  v27[0] = v4;
  v27[1] = v5;
  v23 = v6;
  v27[2] = v6;
  v19 = v5;
  v25 = sub_601A443C(dword_60C89E18, v4, v5);
  if ( !a1[83] )
  {
    v7 = sub_60183670(v25, a3, v23);
    if ( v7 && (v8 = a1[82], v8 < v7) && (v9 = sub_60183698(v25, a3, v23, v8), sub_6018DB70(v9, v27, v9)) )
    {
      if ( !a1[83] )
        goto LABEL_22;
    }
    else
    {
      a1[83] = 1;
    }
  }
  v10 = sub_60182F10(v25, a3, v23);
  v11 = a1[81];
  if ( v11 >= v10 )
    goto LABEL_22;
  v22 = a1;
  v21 = v10;
  while ( a1[83] != 1 )
  {
LABEL_18:
    a1[81] = ++v11;
    if ( v11 >= v10 )
      goto LABEL_22;
  }
  v12 = (const char **)sub_60182ED0(v25, a3, v23, v11);
  v13 = 0;
  for ( i = 97; ; ++i )
  {
    (*((void (__fastcall **)(const char **))*v12 + 3))(v12);
    sub_6017D524(&v28, "%s%c", v12[1], i);
    v15 = sub_601A0EC0(dword_60C89E00, v4, &v28);
    v16 = v15;
    if ( !v15 )
      break;
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 36))(v15) )
    {
      sub_60220E60(v16);
      v13 = 1;
    }
  }
  if ( (((unsigned __int8)v13 | (unsigned __int8)sub_6018DD18(0, v27, v12)) & 1) == 0 )
  {
    a1 = v22;
    v10 = v21;
    v11 = v22[81];
    goto LABEL_18;
  }
  v29 = &v31;
  v28 = &BufferedSafeStringBase_char_vtable_probably;
  v30 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v28);
  *(_BYTE *)v29 = 0;
  v28 = &off_60BD4F38;
  sub_60199C48(v12, &v28, 0);
  ((void (__fastcall *)(int (***)()))v28[3])(&v28);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = v29;
  v17 = sub_601E03D4(v4, v19, v26);
  a1 = v22;
  if ( v17 )
    *((_BYTE *)v22 + 349) = sub_60183054(v25, FIELD_U32(v17, 96), 0x10000) != 0;
LABEL_22:
  result = sub_601E1CF4(a1);
  if ( !result )
  {
    result = a2 ^ 1;
    if ( a2 == 1 )
      return sub_6018DE10(a1);
  }
  return result;
}
