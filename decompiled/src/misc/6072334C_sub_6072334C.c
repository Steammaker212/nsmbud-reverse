/* sub_6072334C
 * address: 0x6072334C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072334C(int a1, _WORD *a2, int a3)
{
  unsigned int v5; // r0
  unsigned int v6; // r1
  int result; // r0
  int v8; // r9
  unsigned int v9; // r3
  int v10; // r8
  unsigned int *v11; // r8
  int v12; // t1
  _WORD *v13; // r10
  void *v14; // r0

  v5 = (unsigned __int16)a2[1542];
  if ( v5 >> 10 || (v6 = (unsigned __int16)a2[1543], v6 >= 0x200) )
  {
    a2[1541] = -1;
    return 3082;
  }
  else
  {
    v8 = 0;
    v9 = ((4 * v6) & 0x3FFC0) + (v5 >> 4);
    if ( v9 >= 0x800 )
      v9 = 0;
    v10 = a1 + 4 * v9;
    v12 = FIELD_U32(v10, 1028);
    v11 = (unsigned int *)(v10 + 1028);
    LOWORD(v9) = v12;
    if ( v12 == -1 )
    {
      v13 = (_WORD *)(a1 + 9220);
      *v11 = FIELD_U16(a1, 9220);
      v14 = (void *)operator_new_8DE2C8(0x200u, a3, 4);
      if ( FIELD_U16(a1, 9220) <= 0x100u )
        v8 = (unsigned __int16)*v13;
      *(_DWORD *)(a1 + 4 * v8) = v14;
      memset(v14, 0, 0x200u);
      ++*v13;
      LOWORD(v6) = a2[1543];
      LOWORD(v5) = a2[1542];
      v9 = *v11;
    }
    result = v5 & 0xF | (16 * (v6 & 0xF));
    a2[1541] = v9;
    a2[1551] = result;
  }
  return result;
}
