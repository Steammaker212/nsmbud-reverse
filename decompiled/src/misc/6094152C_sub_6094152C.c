/* sub_6094152C
 * address: 0x6094152C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6094152C(_DWORD *result, int a2)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  _DWORD *v5; // r8
  _DWORD *v6; // r11
  int v7; // r10
  _DWORD *v8; // r6
  int v9; // r4
  int v10; // r0
  int v11; // r1
  int i; // r2
  int v13; // r4
  _DWORD *v14; // r6
  int v15; // r7
  int v16; // r0
  int v17; // r1
  int j; // r2
  _DWORD *v20; // [sp+8h] [bp-30h]
  int v21; // [sp+Ch] [bp-2Ch]
  int *v22; // [sp+10h] [bp-28h]

  if ( result[6] )
  {
    v20 = result;
    v22 = (int *)result[8];
    v21 = 0;
    do
    {
      v2 = result[13];
      v3 = v2 == -1;
      if ( v2 != -1 )
        v3 = v21 == v2;
      if ( v3 )
      {
        v4 = v20[1];
        if ( v4 )
        {
          v5 = (_DWORD *)v20[3];
          v6 = &v5[v4];
          if ( a2 )
          {
            do
            {
              v7 = *v22;
              v8 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 16))(*v5);
              (*(void (__fastcall **)(int))(FIELD_U32(v7, 12) + 12))(v7 + 12);
              (*(void (__fastcall **)(int))(FIELD_U32(v7, 12) + 12))(v7 + 12);
              v9 = FIELD_U32(v7, 16);
              (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
              v10 = v8[1];
              if ( v9 == v10 )
              {
LABEL_17:
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 24))(*v5);
              }
              else
              {
                v11 = FIELD_U32(v7, 16);
                for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
                {
                  if ( !*(_BYTE *)(v11 + i - 1) )
                    goto LABEL_17;
                  if ( i >= 524289 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v10 + i) )
                    break;
                  if ( !*(_BYTE *)(v11 + i) )
                    goto LABEL_17;
                }
              }
              ++v5;
            }
            while ( v5 != v6 );
          }
          else
          {
            do
            {
              v13 = *v22;
              v14 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 16))(*v5);
              (*(void (__fastcall **)(int))(FIELD_U32(v13, 12) + 12))(v13 + 12);
              (*(void (__fastcall **)(int))(FIELD_U32(v13, 12) + 12))(v13 + 12);
              v15 = FIELD_U32(v13, 16);
              (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
              v16 = v14[1];
              if ( v15 == v16 )
              {
LABEL_28:
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 24))(*v5);
              }
              else
              {
                v17 = FIELD_U32(v13, 16);
                for ( j = 1; *(unsigned __int8 *)(v17 + j - 1) == *(unsigned __int8 *)(v16 + j - 1); j += 2 )
                {
                  if ( !*(_BYTE *)(v17 + j - 1) )
                    goto LABEL_28;
                  if ( j >= 524289 || *(unsigned __int8 *)(v17 + j) != *(unsigned __int8 *)(v16 + j) )
                    break;
                  if ( !*(_BYTE *)(v17 + j) )
                    goto LABEL_28;
                }
              }
              ++v5;
            }
            while ( v5 != v6 );
          }
        }
      }
      ++v21;
      result = v20;
      ++v22;
    }
    while ( v22 != (int *)(v20[8] + 4 * v20[6]) );
  }
  return result;
}
