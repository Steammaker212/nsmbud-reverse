/* Actor_shafuruburoku_build_helper
 * address: 0x608338B8   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_shafuruburoku_build_helper(int a1, unsigned __int16 a2, char a3, float a4)
{
  int v8; // r0

  *(_DWORD *)a1 = &off_60C2B120;
  FIELD_U32(a1, 8) = 0;
  FIELD_U16(a1, 12) = 0;
  memset((void *)(a1 + 16), 0, 36);
  FIELD_U16(a1, 4) = a2;
  if ( a2 )
  {
    v8 = sub_608DE334(12 * a2, 0, 4);
    if ( v8 )
    {
      FIELD_U32(a1, 20) = a2;
      FIELD_U32(a1, 24) = v8;
    }
  }
  FIELD_F32(a1, 8) = a4;
  FIELD_U8(a1, 12) = a3;
  Actor_shafuruburoku_build_helper_helper_833954(a1);
  return a1;
}
