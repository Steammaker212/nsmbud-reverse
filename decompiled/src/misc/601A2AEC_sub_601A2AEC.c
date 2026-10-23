/* sub_601A2AEC
 * address: 0x601A2AEC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A2AEC(int a1)
{
  sub_604C5938(a1 + 2880);
  sub_605454B8(a1 + 31488);
  sub_604F1B18(a1 + 64996);
  sub_604F6AF0(a1 + 139476);
  sub_604FAC1C(a1 + 149128);
  sub_60553098(a1 + 157360);
  sub_60515A14(a1 + 268980);
  sub_6054CD7C(a1 + 153252);
  sub_6048117C(a1 + 227624);
  sub_60499498(dword_60CA059C);
  ((void (__fastcall *)(int))loc_6055EEAC)(a1 + 240464);
  sub_604DE7AC(a1 + 261300);
  sub_604E0678(a1 + 264900);
  sub_603F8084(dword_60C99DD0);
  sub_60401F34(dword_60C99E68);
  StateMgr__execute((StateMgr *)(a1 + 2864));
  if ( !FIELD_U8(a1, 64984)
    && !FIELD_U8(a1, 139472)
    && !FIELD_U8(a1, 146616)
    && !FIELD_U8(a1, 152812)
    && !FIELD_U8(a1, 157400)
    && !sub_60515B24(a1 + 268980)
    && !FIELD_U8(a1, 156940)
    && !FIELD_U8(a1, 240460)
    && !FIELD_U8(a1, 53640)
    && !FIELD_U8(a1, 254212)
    && FIELD_U8(a1, 17046) )
  {
    FIELD_U8(a1, 17046) = 0;
  }
  return sub_600242D8(
           (_WORD *)(a1 + 299220),
           (_BYTE *)(a1 + 299222),
           (_BYTE *)(a1 + 299223),
           (_BYTE *)(a1 + 299224),
           137);
}
