/* sub_6085041C
 * address: 0x6085041C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_6085041C(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r8
  int v10; // r0
  int v11; // r8
  void *v12; // r0
  void *v13; // r9
  int v14; // r4
  void *result; // r0
  void *v16; // r6

  v7 = a5;
  FIELD_U32(a1, 12) = a4;
  FIELD_U32(a1, 24) = 0;
  v10 = FIELD_U16(a4, 12);
  if ( FIELD_U16(a4, 12) )
  {
    v11 = 4 * v10;
    v12 = (void *)sub_60855BC8(4 * v10);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11);
      FIELD_U32(a1, 24) = v13;
      v7 = a5;
      if ( FIELD_U16(a4, 12) )
      {
        v14 = 0;
        do
        {
          *(_DWORD *)(FIELD_U32(a1, 24) + 4 * v14) = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 48))(
                                                          a3,
                                                          a2,
                                                          a4 + 20 + *(_DWORD *)(a4 + 20 + 4 * v14));
          ++v14;
        }
        while ( v14 < FIELD_U16(a4, 12) );
      }
    }
    else
    {
      v7 = a5;
      FIELD_U32(a1, 24) = 0;
    }
  }
  result = (void *)sub_60855BC8(8 * v7);
  v16 = result;
  if ( result )
  {
    if ( v7 )
      result = (void *)memset(result, 0, 8 * v7);
    FIELD_U32(a1, 28) = v16;
    FIELD_U16(a1, 34) = v7;
  }
  else
  {
    FIELD_U32(a1, 28) = 0;
    return 0;
  }
  return result;
}
