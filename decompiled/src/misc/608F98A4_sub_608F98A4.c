/* sub_608F98A4
 * address: 0x608F98A4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F98A4(int a1, unsigned int a2, unsigned int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r2
  int v11; // r2
  int result; // r0

  v6 = a1 + 64;
  FIELD_U16(a1, 120) |= 2u;
  v7 = FIELD_U32(a1, 68);
  if ( v7 != v6 )
  {
    v8 = FIELD_U32(a1, 76);
    v9 = v7 - v8;
    if ( a2 | a3 )
    {
      do
      {
        while ( !FIELD_U32(v9, 4) || v9 < a2 || v9 >= a3 )
        {
          v9 = *(_DWORD *)(v8 + v9 + 4) - v8;
          if ( v9 == v6 - v8 )
            goto LABEL_14;
        }
        (**(void (__fastcall ***)(unsigned int))v9)(v9);
        v11 = FIELD_U32(a1, 68);
        v8 = FIELD_U32(a1, 76);
        v9 = v11 - v8;
      }
      while ( v11 != v6 );
    }
    else
    {
      do
      {
        while ( !FIELD_U32(v9, 4) )
        {
          v9 = *(_DWORD *)(v8 + v9 + 4) - v8;
          if ( v9 == v6 - v8 )
            goto LABEL_14;
        }
        (**(void (__fastcall ***)(unsigned int))v9)(v9);
        v10 = FIELD_U32(a1, 68);
        v8 = FIELD_U32(a1, 76);
        v9 = v10 - v8;
      }
      while ( v10 != v6 );
    }
  }
LABEL_14:
  result = FIELD_U16(a1, 120) & 0xFFFD;
  FIELD_U16(a1, 120) = result;
  return result;
}
