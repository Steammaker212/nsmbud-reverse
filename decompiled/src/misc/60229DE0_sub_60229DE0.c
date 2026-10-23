/* sub_60229DE0
 * address: 0x60229DE0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60229DE0(int a1, int a2, int a3)
{
  int v6; // r5

  v6 = operator_new(0x50u);
  sub_60220CB0((_DWORD *)v6, a1, a2);
  *(_DWORD *)v6 = off_60BD9344;
  FIELD_U32(v6, 28) = -1;
  FIELD_U8(v6, 48) = 0;
  FIELD_U32(v6, 44) = 0;
  FIELD_U32(v6, 40) = 0;
  FIELD_U32(v6, 36) = 0;
  FIELD_U32(v6, 32) = 0;
  FIELD_U32(v6, 56) = v6 + 64;
  FIELD_U32(v6, 52) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v6, 60) = 16;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(v6 + 52);
  **(_BYTE **)(v6 + 56) = 0;
  FIELD_U32(v6, 52) = &off_60BD54D4;
  sub_60229EAC(v6, a3);
  return v6;
}
