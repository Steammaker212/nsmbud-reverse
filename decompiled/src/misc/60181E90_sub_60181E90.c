/* sub_60181E90
 * address: 0x60181E90   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60181E90(int a1, int a2)
{
  int result; // r0
  int v5; // r8
  int v6; // r7
  char *v7; // r1
  int v8; // r0
  bool v9; // cc
  bool v10; // nf
  char *v11; // r0
  unsigned int v12; // r0
  int v13; // r2
  int v14; // r2
  char *v15; // r6
  int v16; // r0
  size_t v17; // r5

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 92))(a2);
  v5 = result;
  if ( result >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = (char *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 88))(a2, v6);
      v8 = 0;
      while ( v7[v8] )
      {
        if ( !v7[v8 + 1] )
        {
          ++v8;
          break;
        }
        if ( !v7[v8 + 2] )
        {
          v8 += 2;
          break;
        }
        v9 = v8 + 2 < 0x80000;
        v8 += 3;
        if ( !v9 )
        {
          v8 = 0;
          break;
        }
      }
      v10 = v8 < 0;
      v11 = v7;
      if ( v10 )
        v11 = &byte_60B3BA34;
      result = (unsigned __int8)*v11;
      if ( result == 75 )
      {
        v12 = FIELD_U32(a1, 28);
        v13 = 0;
        if ( v12 < 0x100 )
          v13 = FIELD_U32(a1, 28);
        v14 = a1 + 1096 * v13;
        v15 = *(char **)(v14 + 48);
        if ( v15 != v7 )
        {
          v16 = FIELD_U32(v14, 52);
          v17 = v16 - 1;
          if ( v16 > 4 )
            v17 = 4;
          qmemcpy(*(void **)(v14 + 48), v7, v17);
          v15[v17] = 0;
          v12 = FIELD_U32(a1, 28);
        }
        result = v12 + 1;
        FIELD_U32(a1, 28) = result;
      }
      ++v6;
    }
    while ( v6 != v5 );
  }
  return result;
}
