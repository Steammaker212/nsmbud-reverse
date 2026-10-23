/* sub_60570768
 * address: 0x60570768   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_60570768(int a1)
{
  float *v2; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s4
  unsigned int v6; // r1
  float *v7; // r2
  float v8; // s6
  float v9; // s8

  v2 = (float *)(a1 + 7396);
  v3 = *v2 + FIELD_F32(a1, 7408);
  *v2 = v3;
  v4 = FIELD_F32(a1, 7400) + FIELD_F32(a1, 7412);
  FIELD_F32(a1, 7400) = v4;
  v5 = FIELD_F32(a1, 7404) + FIELD_F32(a1, 7416);
  FIELD_F32(a1, 7404) = v5;
  v6 = FIELD_U32(a1, 7424) + dword_60CAE95C;
  FIELD_U32(a1, 7424) = v6;
  v7 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v8 = *v7;
  v9 = v7[1];
  FIELD_F32(a1, 108) = v3;
  FIELD_F32(a1, 116) = v5;
  FIELD_F32(a1, 112) = (float)(v4
                               + (float)((float)(v8 + (float)((float)((float)(v6 & 0xFFFFFF) * v9) * 0.000000059605))
                                       * 16.0))
                       + FIELD_F32(a1, 6796);
  if ( FIELD_U32(a1, 7428) == 1 )
  {
    if ( (float)(FIELD_F32(AreaTask_intance, 1812) + -24.0) <= v3 )
      return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
  }
  else if ( (float)(FIELD_F32(AreaTask_intance, 1820) + 24.0) >= v3 )
  {
    return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
  }
  if ( sub_60571130() )
  {
    sub_605715F0(a1);
    FIELD_U32(a1, 7420) = 30 * (unsigned __int8)BYTE1(FIELD_U32(a1, 20));
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 428))(a1, &dword_60CAE8FC);
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 428))(a1, &dword_60CAE93C);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
}
