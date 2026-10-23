/* sub_601D86E4
 * address: 0x601D86E4   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601D86E4(int a1, int a2, _BOOL4 a3)
{
  int v5; // r5
  int v6; // r1
  char *v7; // r0
  bool v8; // cc
  int v9; // r1
  _BOOL4 result; // r0
  bool v11; // zf
  int v12; // r6

  v5 = sub_601DFFE4(a2);
  (*(void (__fastcall **)(int))(FIELD_U32(v5, 4) + 12))(v5 + 4);
  v6 = 0;
  v7 = *(char **)(v5 + 8);
  while ( v7[v6] )
  {
    if ( !v7[v6 + 1] )
    {
      ++v6;
      break;
    }
    if ( !v7[v6 + 2] )
    {
      v6 += 2;
      break;
    }
    v8 = v6 + 2 < 0x80000;
    v6 += 3;
    if ( !v8 )
    {
      v6 = 0;
      break;
    }
  }
  if ( v6 < 0 )
    v7 = &byte_60B3BA34;
  v9 = (unsigned __int8)*v7;
  result = 0;
  if ( v9 != 75 )
  {
    v11 = sub_601D9D84(a2) == 0;
    result = a3;
    if ( v11 )
    {
      v12 = 0;
      if ( sub_601E02F8(a2, 0) )
      {
        if ( sub_60178694(v5, 0) )
          v12 = RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 0, 0);
        if ( sub_60178694(v5, 1u) && RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 1, 0) )
          ++v12;
        if ( sub_60178694(v5, 2u) && RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 2, 0) )
          ++v12;
        if ( sub_60178694(v5, 3u) && RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 3, 0) )
          ++v12;
        if ( sub_60178694(v5, 4u) && RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 4, 0) )
          ++v12;
        if ( sub_60178694(v5, 5u) )
        {
          if ( RW9M0W909_ref_22AE5C(dword_60C8D864, a2, 5, 0) )
            ++v12;
        }
        return v12 != 2;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}
