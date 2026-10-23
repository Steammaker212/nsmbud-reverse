/* sub_60223D58
 * address: 0x60223D58   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60223D58(_DWORD *a1)
{
  int v1; // r6
  signed int v2; // r7
  unsigned int i; // r5
  _DWORD *v4; // r7
  int v5; // r0
  int v6; // r10
  _DWORD *v7; // r9
  _DWORD *v8; // r6
  int v9; // r11
  int v10; // r0
  int v11; // r1
  int j; // r2
  unsigned int k; // r5
  _DWORD *v14; // r10
  int v15; // r0
  int v16; // r7
  _DWORD *v17; // r9
  _DWORD *v18; // r6
  int v19; // r11
  int v20; // r0
  int v21; // r1
  int m; // r2
  int result; // r0
  const char *v24; // r0
  _DWORD *v25; // r5
  const char *v26; // r0
  _DWORD *v27; // r0
  int v28; // [sp+0h] [bp-40h]
  int v29; // [sp+0h] [bp-40h]
  _DWORD *v30; // [sp+4h] [bp-3Ch]
  _DWORD *v31; // [sp+4h] [bp-3Ch]
  int v32; // [sp+8h] [bp-38h]
  signed int v33; // [sp+Ch] [bp-34h]
  int (**v35)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v36; // [sp+18h] [bp-28h]

  v1 = sub_601A443C(dword_60C89E18, a1[441], a1[442]);
  if ( FIELD_S32(v1, 28) >= 1 )
  {
    v2 = 0;
    v32 = v1;
    do
    {
      v28 = sub_60182F10(v1, 0, v2);
      v33 = v2;
      if ( v28 >= 1 )
      {
        for ( i = 0; i != v28; ++i )
        {
          v4 = (_DWORD *)sub_60182ED0(v1, 0, v2, i);
          v5 = a1[141];
          if ( !v5 )
            goto LABEL_19;
          v6 = 0;
          v7 = (_DWORD *)a1[143];
          v30 = &v7[v5];
          while ( 1 )
          {
            v8 = (_DWORD *)*v7;
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v7 + 12))(*v7);
            (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
            v9 = v8[1];
            (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
            v10 = v4[1];
            if ( v9 == v10 )
              break;
            v11 = v8[1];
            for ( j = 1; *(unsigned __int8 *)(v11 + j - 1) == *(unsigned __int8 *)(v10 + j - 1); j += 2 )
            {
              if ( !*(_BYTE *)(v11 + j - 1) )
                goto LABEL_18;
              if ( j >= 524289 || *(unsigned __int8 *)(v11 + j) != *(unsigned __int8 *)(v10 + j) )
                break;
              if ( !*(_BYTE *)(v11 + j) )
                goto LABEL_18;
            }
            ++v7;
            ++v6;
            if ( v7 == v30 )
              goto LABEL_19;
          }
LABEL_18:
          if ( v6 < 0 )
LABEL_19:
            sub_60225C88(a1, v4);
          v1 = v32;
          v2 = v33;
        }
      }
      v29 = sub_60182F10(v1, 1, v2);
      if ( v29 >= 1 )
      {
        for ( k = 0; k != v29; ++k )
        {
          v14 = (_DWORD *)sub_60182ED0(v1, 1u, v2, k);
          v15 = a1[141];
          if ( !v15 )
            goto LABEL_37;
          v16 = 0;
          v17 = (_DWORD *)a1[143];
          v31 = &v17[v15];
          while ( 1 )
          {
            v18 = (_DWORD *)*v17;
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v17 + 12))(*v17);
            (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
            v19 = v18[1];
            (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
            v20 = v14[1];
            if ( v19 == v20 )
              break;
            v21 = v18[1];
            for ( m = 1; *(unsigned __int8 *)(v21 + m - 1) == *(unsigned __int8 *)(v20 + m - 1); m += 2 )
            {
              if ( !*(_BYTE *)(v21 + m - 1) )
                goto LABEL_36;
              if ( m >= 524289 || *(unsigned __int8 *)(v21 + m) != *(unsigned __int8 *)(v20 + m) )
                break;
              if ( !*(_BYTE *)(v21 + m) )
                goto LABEL_36;
            }
            ++v17;
            ++v16;
            if ( v17 == v31 )
              goto LABEL_37;
          }
LABEL_36:
          if ( v16 < 0 )
LABEL_37:
            sub_60225C88(a1, v14);
          v1 = v32;
          v2 = v33;
        }
      }
      ++v2;
    }
    while ( v2 < FIELD_U32(v1, 28) );
  }
  result = a1[441];
  switch ( result )
  {
    case 0:
      result = a1[442];
      if ( !result )
      {
        v35 = &sead__SafeStringBase__vtable;
        v24 = "RFd02W1X0";
        goto LABEL_47;
      }
      break;
    case 2:
      result = a1[442];
      if ( !result )
      {
        v25 = a1;
        v35 = &sead__SafeStringBase__vtable;
        v36 = "RW3J0W5J0";
        sub_60225C88(a1, &v35);
        v35 = &sead__SafeStringBase__vtable;
        v26 = "RW3J1W3M0";
        goto LABEL_50;
      }
      break;
    case 3:
      result = a1[442];
      if ( !result )
      {
        v35 = &sead__SafeStringBase__vtable;
        v24 = "RW4J0Fj01";
LABEL_47:
        v36 = v24;
        v27 = a1;
        goto LABEL_51;
      }
      break;
    case 4:
      result = a1[442];
      if ( !result )
      {
        v25 = a1;
        v35 = &sead__SafeStringBase__vtable;
        v36 = "RW5J4W5J2";
        sub_60225C88(a1, &v35);
        v35 = &sead__SafeStringBase__vtable;
        v36 = "RW5J0W5J2";
        sub_60225C88(a1, &v35);
        v35 = &sead__SafeStringBase__vtable;
        v26 = "RFl05W5S0";
LABEL_50:
        v36 = v26;
        v27 = v25;
LABEL_51:
        result = sub_60225C88(v27, &v35);
      }
      break;
    default:
      return result;
  }
  return result;
}
