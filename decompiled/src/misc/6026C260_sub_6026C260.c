/* sub_6026C260
 * address: 0x6026C260   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026C260(int result)
{
  float v1; // s0
  float v2; // s0
  _DWORD *v3; // r1
  int v4; // r2

  v1 = FIELD_F32(result, 108);
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -4.0) <= v1 && (float)(FIELD_F32(dword_60CC6484, 120) + 4.0) >= v1 )
  {
    v2 = FIELD_F32(result, 112);
    if ( FIELD_F32(dword_60CC6484, 132) <= v2 && FIELD_F32(dword_60CC6484, 124) >= v2 )
    {
      v3 = (_DWORD *)(result + 6900);
      v4 = FIELD_U32(result, 6900);
      if ( !v4 || (*v3 = v4 - 1, v4 == 1) )
      {
        *v3 = 180;
        return sub_6026D1FC();
      }
      else if ( v4 == 4 )
      {
        FIELD_U32(result, 6888) = 1;
        FIELD_U8(result, 6936) = 0;
        FIELD_U32(result, 6892) = 0;
        FIELD_U8(result, 6904) = 0;
        FIELD_U32(result, 6872) = 1065353216;
        FIELD_U32(result, 6876) = 1065353216;
        FIELD_U32(result, 6928) = 0;
        FIELD_U32(result, 6932) = 0;
        FIELD_U32(result, 6912) = 1065353216;
        FIELD_U32(result, 6916) = 1065353216;
        FIELD_U32(result, 6920) = 1065353216;
        FIELD_U32(result, 6924) = 1065353216;
      }
    }
  }
  return result;
}
