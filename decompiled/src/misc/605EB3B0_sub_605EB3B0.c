/* sub_605EB3B0
 * address: 0x605EB3B0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB3B0(int a1, int a2)
{
  int result; // r0
  int v4; // r9
  __guard *v5; // r0
  int v6; // r11
  int v7; // r5
  int v8; // r8
  int v9; // r4
  int v10; // r0
  int v11; // r6
  int v12; // r2
  int v13; // r1
  int v14; // r5
  int *v15; // r1
  int v16; // r8
  void (__fastcall *v17)(_DWORD *, int); // r6
  int v18; // r4
  int v19; // r11
  _DWORD *v20; // r0
  int v21; // r1
  void (__fastcall *v22)(_DWORD *, int); // r2
  int v23; // r1
  bool v24; // zf
  __guard *v25; // [sp+4h] [bp-3Ch]
  int v26; // [sp+8h] [bp-38h]
  _DWORD *v27; // [sp+Ch] [bp-34h]
  int *v28; // [sp+10h] [bp-30h]
  int (**v29)(); // [sp+14h] [bp-2Ch] BYREF
  int v30; // [sp+18h] [bp-28h]

  result = FIELD_U32(a1, 40);
  if ( result )
  {
    v26 = FIELD_U16(a1, 64);
    if ( FIELD_U16(a1, 64) )
    {
      v4 = 0;
      v5 = &dword_60CB1CA0[2 * a2];
      v25 = v5 + 12;
      v28 = v5 + 13;
      do
      {
        v6 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 440) + 16) + 3016 * v4 + 24);
        if ( v6 )
        {
          v7 = FIELD_U32(v6, 260);
          if ( v7 >= 1 )
          {
            v8 = 0;
            v27 = *(_DWORD **)(a1 + 76);
            while ( 1 )
            {
              v9 = *(unsigned __int8 *)(v6 + 16 * v8 + 16);
              v10 = *(_DWORD *)(*(_DWORD *)(*v27 + 56) + 8 * v9);
              v29 = &sead__SafeStringBase__vtable;
              v30 = v10 + 2;
              (*(void (__fastcall **)(__guard *))(*v25 + 12))(v25);
              (*(void (__fastcall **)(__guard *))(*v25 + 12))(v25);
              v11 = *v28;
              ((void (__fastcall *)(int (***)()))v29[3])(&v29);
              if ( v11 == v30 )
                break;
              v12 = 1;
              v13 = *v28;
              while ( *(unsigned __int8 *)(v13 + v12 - 1) == *(unsigned __int8 *)(v30 + v12 - 1) )
              {
                if ( !*(_BYTE *)(v13 + v12 - 1) )
                  goto LABEL_18;
                if ( v12 > 0x80000 || *(unsigned __int8 *)(v13 + v12) != *(unsigned __int8 *)(v30 + v12) )
                  break;
                if ( !*(_BYTE *)(v13 + v12) )
                  goto LABEL_18;
                v12 += 2;
              }
              if ( ++v8 >= v7 )
                goto LABEL_26;
            }
LABEL_18:
            v14 = FIELD_U16(a1, 66);
            if ( FIELD_U16(a1, 66) )
            {
              v15 = (int *)(v27[13] + 8 * v9);
              v16 = *v15;
              v17 = *(void (__fastcall **)(_DWORD *, int))(v27[12] + 4 * v9);
              v18 = 0;
              v19 = v15[1];
              do
              {
                v20 = (_DWORD *)(FIELD_U32(a1, 76) + v18);
                if ( v20 )
                {
                  v21 = v20[12];
                  v22 = *(void (__fastcall **)(_DWORD *, int))(v21 + 8);
                  FIELD_U32(v21, 8) = v17;
                  v23 = v20[13];
                  v24 = v22 == v17;
                  FIELD_U32(v23, 16) = v16;
                  FIELD_U32(v23, 20) = v19;
                  if ( v22 != v17 )
                  {
                    v22 = (void (__fastcall *)(_DWORD *, int))v20[17];
                    v24 = v22 == 0;
                  }
                  if ( !v24 )
                    v22(v20, 2);
                }
                v18 += 72;
                --v14;
              }
              while ( v14 );
            }
          }
        }
LABEL_26:
        ++v4;
      }
      while ( v4 != v26 );
    }
    return sub_60427A10(dword_60C9BBD4, a1, 1);
  }
  return result;
}
