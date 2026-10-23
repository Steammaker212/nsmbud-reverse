/* sub_60476898
 * address: 0x60476898   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60476898(int a1)
{
  FIELD_U32(a1, 4) = a1 + 12;
  *(_DWORD *)a1 = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 8) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1);
  **(_BYTE **)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_60BD4BF0;
  FIELD_U32(a1, 76) = 60;
  FIELD_U32(a1, 80) = 0;
  FIELD_U16(a1, 84) = 257;
  **(_BYTE **)(a1 + 4) = 0;
  return a1;
}
