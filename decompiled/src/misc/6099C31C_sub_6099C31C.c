/* sub_6099C31C
 * address: 0x6099C31C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099C31C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r0

  v6 = FIELD_U32(a1, 12);
  switch ( a3 )
  {
    case 2:
      v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(FIELD_U32(a1, 4)) + a2;
      v7 = FIELD_U32(a1, 8);
      if ( v8 >= v7 )
      {
LABEL_10:
        v9 = v7 + v6;
        if ( v8 > v9 )
          v8 = v9;
        return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v8, a3);
      }
LABEL_9:
      v8 = v7;
      return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v8, a3);
    case 1:
      v7 = FIELD_U32(a1, 8);
      v8 = v6 - a2 + v7;
      if ( v8 >= v7 )
        goto LABEL_10;
      goto LABEL_9;
    case 0:
      v7 = FIELD_U32(a1, 8);
      v8 = v7 + a2;
      if ( v7 + a2 >= v7 )
        goto LABEL_10;
      goto LABEL_9;
  }
  return 0x80000000;
}
