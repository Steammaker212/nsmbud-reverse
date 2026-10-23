/* sub_609758B8
 * address: 0x609758B8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609758B8(int a1, int a2, int a3, int a4)
{
  int result; // r0
  unsigned int *v9; // r1
  unsigned int v10; // r0
  _DWORD v11[17]; // [sp+4h] [bp-44h] BYREF

  result = FIELD_U8(a3, 20);
  if ( (result & 1) == 0 )
    return result;
  if ( a4 )
  {
    sub_60955518(a4, FIELD_U32(a3, 24));
    FIELD_U32(a3, 588) = a4;
    if ( (FIELD_U8(a4, 81) & 4) == 0 )
      goto LABEL_9;
  }
  else
  {
    FIELD_U32(a3, 588) = 0;
  }
  v9 = (unsigned int *)(a1 + 3584);
  do
    v10 = __ldrex(v9);
  while ( __strex(v10 + 1, v9) );
  *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v10) = a3;
LABEL_9:
  result = FIELD_U32(a1, 3624);
  if ( result )
  {
    sub_60958528((int)v11, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
    v11[0] = 4;
    result = FIELD_U32(a1, 3624);
    if ( (FIELD_U8(result, 32) & 1) != 0 )
      return (**(int (__fastcall ***)(int, _DWORD *))(result + 36))(result + 36, v11);
  }
  return result;
}
