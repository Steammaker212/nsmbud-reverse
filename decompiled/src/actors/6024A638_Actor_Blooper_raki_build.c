/* Actor_Blooper_raki_build
 * address: 0x6024A638   size: 208   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Blooper_raki_build(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  int i; // r3
  int v6; // r4

  v2 = operator_new(0x3C68u);
  result = Actor_Blooper_raki_build_helper(v2, a1);
  *(_DWORD *)result = off_60BD9F60;
  v4 = result + 12380;
  for ( i = 0; i != 3072; i += 48 )
  {
    v6 = v4 + i;
    *(_DWORD *)(v6 - 24) = 0;
    *(_DWORD *)(v6 - 20) = 0;
    *(_DWORD *)(v6 - 16) = 0;
    *(_DWORD *)(v4 + i) = 0;
    FIELD_U32(v6, 4) = 0;
    FIELD_U32(v6, 8) = 0;
  }
  FIELD_U8(result, 15421) = 0;
  FIELD_U8(result, 15422) = 0;
  FIELD_U32(result, 15440) = result;
  FIELD_U32(result, 15436) = 0;
  FIELD_U32(result, 15432) = 0;
  FIELD_U32(result, 15428) = 0;
  FIELD_U32(result, 15424) = 0;
  FIELD_U32(result, 15444) = 0;
  FIELD_U32(result, 15448) = 0;
  FIELD_U16(result, 15452) = 0;
  FIELD_U8(result, 15462) = 0;
  FIELD_U16(result, 15460) = 0;
  FIELD_U32(result, 15456) = 0;
  return result;
}
