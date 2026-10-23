/* sub_60737DC8
 * address: 0x60737DC8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60737DC8(int a1, char a2, unsigned int a3, float a4)
{
  bool v4; // zf
  unsigned int v5; // r1

  v4 = a3 == 0;
  FIELD_U8(a1, 7424) = a2;
  if ( a3 )
    a3 = 0x80000000;
  FIELD_F32(a1, 7440) = a4;
  FIELD_U32(a1, 7428) = a3;
  v5 = 0;
  if ( v4 )
    v5 = 0x80000000;
  FIELD_U32(a1, 7432) = v5;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDE60);
}
