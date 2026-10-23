/* sub_609394E8
 * address: 0x609394E8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609394E8(int a1)
{
  char *v2; // r5
  int v3; // r0
  size_t v4; // r6

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = a1;
  FIELD_U32(a1, 32) = 0;
  *(_DWORD *)a1 = off_60BF9C4C;
  FIELD_U32(a1, 16) = &off_60BF9C5C;
  FIELD_U32(a1, 40) = a1 + 48;
  FIELD_U32(a1, 36) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 44) = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 36);
  FIELD_U32(a1, 36) = &off_60C5C94C;
  v2 = *(char **)(a1 + 40);
  if ( v2 != &byte_60ABC94D )
  {
    v3 = FIELD_U32(a1, 44);
    v4 = v3 - 1;
    if ( v3 > 0 )
      v4 = 0;
    memset(*(void **)(a1 + 40), 0, v4);
    v2[v4] = 0;
  }
  FIELD_U32(a1, 36) = &off_60BD95A8;
  FIELD_U32(a1, 180) = a1 + 188;
  FIELD_U32(a1, 176) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 184) = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 176);
  **(_BYTE **)(a1 + 180) = 0;
  FIELD_U32(a1, 176) = &off_60BD95A8;
  FIELD_U32(a1, 320) = a1 + 328;
  FIELD_U32(a1, 316) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 324) = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 316);
  **(_BYTE **)(a1 + 320) = 0;
  FIELD_U32(a1, 316) = &off_60BD95A8;
  FIELD_U8(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 0;
  FIELD_U8(a1, 472) = 1;
  FIELD_U8(a1, 473) = 0;
  FIELD_U8(a1, 474) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  return a1;
}
