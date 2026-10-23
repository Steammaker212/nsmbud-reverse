/* Icon_CIRCLE_ORENGE_ref
 * address: 0x6091F23C   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_CIRCLE_ORENGE_ref(int a1, int a2, unsigned __int16 a3, int a4, int a5)
{
  _DWORD *v5; // r5
  unsigned int v6; // r11
  int v7; // r4
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r1
  _DWORD *v12; // r6
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r12
  _DWORD *v18; // r10
  _DWORD *v19; // r3
  _DWORD *v20; // lr
  _DWORD *v21; // r5
  _DWORD *v22; // r6
  _DWORD *v23; // r7
  _DWORD *v24; // r1
  signed int v25; // r4
  __int64 v26; // r0
  void *v27; // r0
  int v29; // [sp+8h] [bp-38h]
  int (**v31)(); // [sp+10h] [bp-30h] BYREF
  const char *v32; // [sp+14h] [bp-2Ch]
  int v33[10]; // [sp+18h] [bp-28h] BYREF

  v5 = (_DWORD *)a1;
  v33[0] = a4;
  v6 = 0;
  FIELD_U32(a1, 8) = a2;
  FIELD_U16(a1, 4) = a3;
  v7 = FIELD_U32(a2, 32);
  if ( FIELD_U32(a2, 28) > (unsigned int)a3 )
    v7 += 936 * a3;
  v29 = v7;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a4 + 4 * v6 + 8);
    if ( v8 == 0xFFFF )
    {
      v5[18 * v6 + 20] = 0;
    }
    else
    {
      v9 = v5[2];
      v10 = FIELD_U32(v9, 72);
      v11 = FIELD_U32(v9, 76);
      if ( v10 > (__int16)v8 )
        v11 += 52 * (__int16)v8;
      v12 = &v5[18 * v6];
      v12[20] = v11;
      v13 = sub_6091B2F0((int)v33, v6);
      v14 = v12 + 3;
      sub_60973C10(v12 + 3, v13[1], *(_DWORD *)(FIELD_U32(v7, 4) + 24), a5);
      v15 = *(_DWORD *)(v12[20] + 32);
      v31 = &sead__SafeStringBase__vtable;
      v32 = (const char *)(v15 + 16);
      sead__SafeStringBase__operator_assign((int)(v12 + 4), (int)&v31);
      v16 = v13[1];
      if ( v16 )
      {
        v17 = v12 + 13;
        v18 = v12 + 12;
        v19 = v12 + 11;
        v20 = v12 + 10;
        v21 = v12 + 9;
        v22 = v12 + 8;
        v23 = v13 + 2;
        do
        {
          v24 = v23 + 3;
          if ( *v22 < *v21 )
            *(_DWORD *)(*v20 + 4 * (*v22)++) = v24;
          if ( *v19 < *v18 )
            *(_DWORD *)(*v17 + 4 * (*v19)++) = (char *)v24 + v23[1];
          --v16;
          v23 = (_DWORD *)((char *)v23 + *v23);
        }
        while ( v16 );
      }
      v7 = v29;
      *(_DWORD *)(sub_6091E0BC(v29, v6) + 8) = v14;
      v5 = (_DWORD *)a1;
    }
    if ( ++v6 == 4 )
      break;
    a4 = v33[0];
  }
  v25 = *(_DWORD *)(FIELD_U32(v7, 4) + 24);
  if ( v25 > 0 )
  {
    v26 = 4LL * (unsigned int)v25;
    if ( !is_mul_ok(4u, v25) )
      HIDWORD(v26) = 1;
    if ( HIDWORD(v26) )
      LODWORD(v26) = -1;
    v27 = (void *)sub_608DE334(v26, a5, 4);
    if ( v27 )
    {
      v5[75] = v25;
      v5[76] = v27;
LABEL_28:
      memset(v27, 0, 4 * v25);
      goto LABEL_29;
    }
    v25 = v5[75];
    if ( v25 )
    {
      v27 = (void *)v5[76];
      goto LABEL_28;
    }
  }
LABEL_29:
  v31 = &sead__SafeStringBase__vtable;
  v32 = "Icon = CIRCLE_ORENGE";
  return sub_60969510(v5, &v31);
}
