/* sub_604B4528
 * address: 0x604B4528   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4528(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r2
  int result; // r0

  v3 = FIELD_U8(a1, 14944);
  v2 = (_BYTE *)(a1 + 14944);
  if ( !v3 )
    goto LABEL_9;
  if ( !FIELD_U8(a1, 14942) )
    goto LABEL_7;
  v4 = FIELD_U32(a1, 4);
  v5 = FIELD_U32(v4, 3508);
  v6 = FIELD_U32(v4, 3512);
  if ( v5 > 9 )
    v6 += 180;
  if ( FIELD_U8(v6, 16) )
  {
    FIELD_U8(a1, 14942) = 0;
LABEL_7:
    if ( !FIELD_U8(dword_60CA1910, 38103) )
    {
      FIELD_U8(a1, 14939) = 0;
      FIELD_U8(a1, 14941) ^= 1u;
      FIELD_U8(a1, 14945) = 1;
      *v2 = 0;
    }
  }
LABEL_9:
  sub_604B4644(a1);
  StateMgr__execute((StateMgr *)(a1 + 516));
  sub_604B4A78(a1);
  sub_604B4370(a1);
  sub_60473B58(*(_DWORD **)(a1 + 4), 0xEu, 0);
  sub_604B4B80(a1);
  sub_604B4EE4(a1);
  if ( FIELD_U8(a1, 14936) )
    sub_604DE9B0(a1, 1, 1);
  result = AreaTask_intance;
  FIELD_U8(AreaTask_intance, 1872) = 0;
  return result;
}
