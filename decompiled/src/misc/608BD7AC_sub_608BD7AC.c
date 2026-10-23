/* sub_608BD7AC
 * address: 0x608BD7AC   size: 1136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BD7AC(int a1)
{
  int *v2; // r0
  int v3; // r1
  bool v4; // zf
  int *v5; // r2
  int v6; // r3

  sub_608D3A9C();
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 984) = 0;
  FIELD_U32(a1, 56396) = 0;
  FIELD_U32(a1, 56400) = 0;
  FIELD_U8(a1, 988) = 0;
  FIELD_U32(a1, 992) = 0;
  FIELD_U32(a1, 236) = 0;
  FIELD_U8(a1, 186) = 0;
  FIELD_U8(a1, 182) = 0;
  FIELD_U16(a1, 180) = 0;
  FIELD_U32(a1, 176) = 0;
  v2 = *(int **)(a1 + 204);
  if ( v2 )
    goto LABEL_6;
  v3 = FIELD_U32(a1, 200);
  v4 = v3 == 0;
  if ( v3 )
  {
    v2 = *(int **)(v3 + 24);
    v4 = v2 == (int *)(v3 + 20);
  }
  if ( !v4 )
  {
    v5 = (int *)v2[1];
    v6 = *v5;
    *(_DWORD *)(*v2 + 4) = v5;
    *v5 = *v2;
    FIELD_U32(v6, 4) = v2;
    *v2 = v6;
    FIELD_U32(a1, 204) = v2 - 2498;
LABEL_6:
    sub_608D72C4();
  }
  FIELD_U32(a1, 436) = 1065353216;
  FIELD_U32(a1, 440) = 1065353216;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U8(a1, 54272) = 0;
  FIELD_U32(a1, 54296) = 1065353216;
  FIELD_U32(a1, 54300) = -1;
  FIELD_U32(a1, 54304) = 1065353216;
  FIELD_U32(a1, 54308) = 0;
  FIELD_U8(a1, 54384) = 0;
  FIELD_U32(a1, 54380) = 0;
  FIELD_U32(a1, 54376) = 0;
  FIELD_U32(a1, 54372) = 0;
  FIELD_U32(a1, 54368) = 0;
  FIELD_U32(a1, 54364) = 0;
  FIELD_U32(a1, 54360) = 0;
  FIELD_U32(a1, 54408) = 1065353216;
  FIELD_U32(a1, 54412) = -1;
  FIELD_U32(a1, 54416) = 1065353216;
  FIELD_U32(a1, 54420) = 0;
  FIELD_U8(a1, 54496) = 0;
  FIELD_U32(a1, 54492) = 0;
  FIELD_U32(a1, 54488) = 0;
  FIELD_U32(a1, 54484) = 0;
  FIELD_U32(a1, 54480) = 0;
  FIELD_U32(a1, 54476) = 0;
  FIELD_U32(a1, 54472) = 0;
  FIELD_U32(a1, 54520) = 1065353216;
  FIELD_U32(a1, 54524) = -1;
  FIELD_U32(a1, 54528) = 1065353216;
  FIELD_U32(a1, 54532) = 0;
  FIELD_U8(a1, 54608) = 0;
  FIELD_U32(a1, 54604) = 0;
  FIELD_U32(a1, 54600) = 0;
  FIELD_U32(a1, 54596) = 0;
  FIELD_U32(a1, 54592) = 0;
  FIELD_U32(a1, 54588) = 0;
  FIELD_U32(a1, 54584) = 0;
  FIELD_U32(a1, 54632) = 1065353216;
  FIELD_U32(a1, 54636) = -1;
  FIELD_U32(a1, 54640) = 1065353216;
  FIELD_U32(a1, 54644) = 0;
  FIELD_U8(a1, 54720) = 0;
  FIELD_U32(a1, 54716) = 0;
  FIELD_U32(a1, 54712) = 0;
  FIELD_U32(a1, 54708) = 0;
  FIELD_U32(a1, 54704) = 0;
  FIELD_U32(a1, 54700) = 0;
  FIELD_U32(a1, 54696) = 0;
  FIELD_U32(a1, 54744) = 1065353216;
  FIELD_U32(a1, 54748) = -1;
  FIELD_U32(a1, 54752) = 1065353216;
  FIELD_U32(a1, 54756) = 0;
  FIELD_U8(a1, 54832) = 0;
  FIELD_U32(a1, 54828) = 0;
  FIELD_U32(a1, 54824) = 0;
  FIELD_U32(a1, 54820) = 0;
  FIELD_U32(a1, 54816) = 0;
  FIELD_U32(a1, 54812) = 0;
  FIELD_U32(a1, 54808) = 0;
  FIELD_U32(a1, 54856) = 1065353216;
  FIELD_U32(a1, 54860) = -1;
  FIELD_U32(a1, 54864) = 1065353216;
  FIELD_U32(a1, 54868) = 0;
  FIELD_U8(a1, 54944) = 0;
  FIELD_U32(a1, 54940) = 0;
  FIELD_U32(a1, 54936) = 0;
  FIELD_U32(a1, 54932) = 0;
  FIELD_U32(a1, 54928) = 0;
  FIELD_U32(a1, 54924) = 0;
  FIELD_U32(a1, 54920) = 0;
  FIELD_U32(a1, 54968) = 1065353216;
  FIELD_U32(a1, 54972) = -1;
  FIELD_U32(a1, 54976) = 1065353216;
  FIELD_U32(a1, 54980) = 0;
  FIELD_U8(a1, 55056) = 0;
  FIELD_U32(a1, 55052) = 0;
  FIELD_U32(a1, 55048) = 0;
  FIELD_U32(a1, 55044) = 0;
  FIELD_U32(a1, 55040) = 0;
  FIELD_U32(a1, 55036) = 0;
  FIELD_U32(a1, 55032) = 0;
  FIELD_U32(a1, 55080) = 1065353216;
  FIELD_U32(a1, 55084) = -1;
  FIELD_U32(a1, 55088) = 1065353216;
  FIELD_U32(a1, 55092) = 0;
  FIELD_U32(a1, 55164) = 0;
  FIELD_U32(a1, 55160) = 0;
  FIELD_U32(a1, 55156) = 0;
  FIELD_U32(a1, 55152) = 0;
  FIELD_U32(a1, 55148) = 0;
  FIELD_U32(a1, 55144) = 0;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 1028) = 0;
  FIELD_U32(a1, 4352) = 0;
  FIELD_U32(a1, 4356) = 0;
  FIELD_U32(a1, 7680) = 0;
  FIELD_U32(a1, 7684) = 0;
  FIELD_U32(a1, 11008) = 0;
  FIELD_U32(a1, 11012) = 0;
  FIELD_U32(a1, 14336) = 0;
  FIELD_U32(a1, 14340) = 0;
  FIELD_U32(a1, 17664) = 0;
  FIELD_U32(a1, 17668) = 0;
  FIELD_U32(a1, 20992) = 0;
  FIELD_U32(a1, 20996) = 0;
  FIELD_U32(a1, 24320) = 0;
  FIELD_U32(a1, 24324) = 0;
  FIELD_U32(a1, 27648) = 0;
  FIELD_U32(a1, 27652) = 0;
  FIELD_U32(a1, 30976) = 0;
  FIELD_U32(a1, 30980) = 0;
  FIELD_U32(a1, 34304) = 0;
  FIELD_U32(a1, 34308) = 0;
  FIELD_U32(a1, 37632) = 0;
  FIELD_U32(a1, 37636) = 0;
  FIELD_U32(a1, 40960) = 0;
  FIELD_U32(a1, 40964) = 0;
  FIELD_U32(a1, 44288) = 0;
  FIELD_U32(a1, 44292) = 0;
  FIELD_U32(a1, 47616) = 0;
  FIELD_U32(a1, 47620) = 0;
  FIELD_U32(a1, 50944) = 0;
  FIELD_U32(a1, 50948) = 0;
  return 0;
}
