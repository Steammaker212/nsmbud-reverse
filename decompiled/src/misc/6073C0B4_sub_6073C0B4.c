/* sub_6073C0B4
 * address: 0x6073C0B4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073C0B4(int a1)
{
  StateMethodExecuter *result; // r0
  signed int v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_605D792C(a1, FIELD_U32(a1, 80));
  v3 = (unsigned __int8)byte_60B0594C[FIELD_U32(a1, 80)] << 27;
  result = (StateMethodExecuter *)sub_6083246C((int *)(a1 + 160), &v4, &v3);
  if ( result == (StateMethodExecuter *)1 )
  {
    FIELD_U16(a1, 8046) = 30;
    return sub_605D79D0(a1, (StateBase *)&dword_60CBE088, 0);
  }
  return result;
}
