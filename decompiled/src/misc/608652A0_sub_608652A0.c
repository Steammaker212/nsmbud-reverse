/* sub_608652A0
 * address: 0x608652A0   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_608652A0(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6)
{
  int v9; // r0
  int v10; // r3
  _DWORD *v11; // r1
  int v12; // r3
  _DWORD *v13; // r1
  int v14; // r3
  _DWORD *v15; // r5

  v9 = sub_60867E38(a2, a1);
  if ( a5 >= 1 )
  {
    if ( a6 )
    {
      v10 = FIELD_S8(a1, 208);
      if ( v10 >= 0 )
      {
        if ( v10 < a5 )
        {
          v11 = (_DWORD *)(a6 + 32 * v10);
          FIELD_U32(v9, 224) = *v11;
          FIELD_U32(v9, 228) = v11[1];
          FIELD_U32(v9, 232) = 0;
          FIELD_U32(v9, 236) = 1065353216;
          FIELD_U32(v9, 240) = v11[2];
          FIELD_U32(v9, 244) = v11[3];
          FIELD_U32(v9, 248) = 0;
          FIELD_U32(v9, 252) = 1065353216;
          FIELD_U32(v9, 256) = v11[4];
          FIELD_U32(v9, 260) = v11[5];
          FIELD_U32(v9, 264) = 0;
          FIELD_U32(v9, 268) = 1065353216;
          FIELD_U32(v9, 272) = v11[6];
          FIELD_U32(v9, 276) = v11[7];
          FIELD_U32(v9, 280) = 0;
          FIELD_U32(v9, 284) = 1065353216;
        }
        v12 = FIELD_S8(a1, 209);
        if ( v12 >= 0 )
        {
          if ( v12 < a5 )
          {
            v13 = (_DWORD *)(a6 + 32 * v12);
            FIELD_U32(v9, 288) = *v13;
            FIELD_U32(v9, 292) = v13[1];
            FIELD_U32(v9, 296) = 0;
            FIELD_U32(v9, 300) = 1065353216;
            FIELD_U32(v9, 304) = v13[2];
            FIELD_U32(v9, 308) = v13[3];
            FIELD_U32(v9, 312) = 0;
            FIELD_U32(v9, 316) = 1065353216;
            FIELD_U32(v9, 320) = v13[4];
            FIELD_U32(v9, 324) = v13[5];
            FIELD_U32(v9, 328) = 0;
            FIELD_U32(v9, 332) = 1065353216;
            FIELD_U32(v9, 336) = v13[6];
            FIELD_U32(v9, 340) = v13[7];
            FIELD_U32(v9, 344) = 0;
            FIELD_U32(v9, 348) = 1065353216;
          }
          v14 = FIELD_S8(a1, 210);
          if ( v14 >= 0 && v14 < a5 )
          {
            v15 = (_DWORD *)(a6 + 32 * v14);
            FIELD_U32(v9, 352) = *v15;
            FIELD_U32(v9, 356) = v15[1];
            FIELD_U32(v9, 360) = 0;
            FIELD_U32(v9, 364) = 1065353216;
            FIELD_U32(v9, 368) = v15[2];
            FIELD_U32(v9, 372) = v15[3];
            FIELD_U32(v9, 376) = 0;
            FIELD_U32(v9, 380) = 1065353216;
            FIELD_U32(v9, 384) = v15[4];
            FIELD_U32(v9, 388) = v15[5];
            FIELD_U32(v9, 392) = 0;
            FIELD_U32(v9, 396) = 1065353216;
            FIELD_U32(v9, 400) = v15[6];
            FIELD_U32(v9, 404) = v15[7];
            FIELD_U32(v9, 408) = 0;
            FIELD_U32(v9, 412) = 1065353216;
          }
        }
      }
    }
  }
  FIELD_U32(v9, 528) = *a4;
  FIELD_U32(v9, 532) = a4[1];
  FIELD_U32(v9, 536) = *a3;
  FIELD_U32(v9, 540) = a3[1];
  return sub_608540DC((_QWORD *)a1, (_QWORD *)(v9 + 64));
}
