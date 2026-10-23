/* sub_60941410
 * address: 0x60941410   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941410(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r7
  _DWORD *v4; // r8
  unsigned int v5; // r1
  int v6; // r4
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r1
  int i; // r2

  result = a1[1];
  if ( result )
  {
    v3 = (_DWORD *)a1[3];
    v4 = &v3[result];
    do
    {
      v5 = a1[13];
      if ( v5 == -1 )
        goto LABEL_14;
      v6 = a1[5];
      if ( a1[4] > v5 )
        v6 += 324 * v5;
      v7 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 16))(*v3);
      (*(void (__fastcall **)(int))(FIELD_U32(v6, 12) + 12))(v6 + 12);
      (*(void (__fastcall **)(int))(FIELD_U32(v6, 12) + 12))(v6 + 12);
      v8 = FIELD_U32(v6, 16);
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      result = v7[1];
      if ( v8 == result )
      {
LABEL_14:
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 24))(*v3);
      }
      else
      {
        v9 = FIELD_U32(v6, 16);
        for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(result + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v9 + i - 1) )
            goto LABEL_14;
          if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(result + i) )
            break;
          if ( !*(_BYTE *)(v9 + i) )
            goto LABEL_14;
        }
      }
      ++v3;
    }
    while ( v3 != v4 );
  }
  return result;
}
