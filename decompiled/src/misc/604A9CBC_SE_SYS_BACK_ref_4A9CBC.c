/* SE_SYS_BACK_ref_4A9CBC
 * address: 0x604A9CBC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4A9CBC(int a1)
{
  int result; // r0
  StateBase *v3; // r1

  SE_SYS_MII_CAP_O_ref();
  result = FIELD_U8(a1, 86998);
  if ( FIELD_U8(a1, 86998) )
    return result;
  result = FIELD_U8(a1, 87002);
  if ( FIELD_U8(a1, 87002) )
    return result;
  if ( FIELD_U8(a1, 86999) )
    goto LABEL_10;
  if ( sub_6047F384(a1 + 277668, 0x2000) )
  {
LABEL_9:
    sub_60502694(a1 + 85956);
LABEL_10:
    result = FIELD_U32(a1, 86984);
    if ( result )
    {
      if ( result == 1 )
      {
        FIELD_U8(a1, 56) = 1;
        v3 = (StateBase *)&unk_60CA1610;
      }
      else
      {
        if ( result != 12 )
          return result;
        result = FIELD_U8(a1, 86468);
        if ( !FIELD_U8(a1, 86468) )
          return result;
        sub_60478680((int)"SE_SYS_BACK", 15);
        FIELD_U8(a1, 56) = 1;
        v3 = (StateBase *)&unk_60CA15F0;
      }
    }
    else
    {
      FIELD_U8(a1, 56) = 1;
      v3 = (StateBase *)&unk_60CA15D0;
    }
    return (int)StateMgr__changeState((StateMgr *)(a1 + 40), v3);
  }
  if ( sub_6047F384(a1 + 277668, 0x4000) )
  {
    if ( !FIELD_U8(a1, 86468) )
    {
      sub_60478680((int)"SE_SYS_BACK", 15);
      sub_60502548(a1 + 85956);
      FIELD_U16(a1, 87008) = 0;
      sub_6047EABC((_DWORD *)(a1 + 85996));
      FIELD_U8(a1, 56) = 1;
      v3 = (StateBase *)&unk_60CA15F0;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 40), v3);
    }
    FIELD_U32(a1, 86984) = 12;
    goto LABEL_9;
  }
  if ( sub_6047F384(a1 + 277668, 64) )
  {
    FIELD_U32(a1, 86984) = 0;
    return 86984;
  }
  else
  {
    result = sub_6047F384(a1 + 277668, 128);
    if ( result == 1 )
    {
      result = 86984;
      FIELD_U32(a1, 86984) = 1;
    }
  }
  return result;
}
