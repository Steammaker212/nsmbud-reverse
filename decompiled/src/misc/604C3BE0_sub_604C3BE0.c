/* sub_604C3BE0
 * address: 0x604C3BE0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C3BE0(int a1)
{
  int *v2; // r1
  StateMethodExecuter *result; // r0

  sub_604C8318(a1);
  if ( FIELD_U32(a1, 14140) == 3 )
  {
    FIELD_U32(a1, 40) = &dword_60CA2D6C;
    if ( FIELD_U8(a1, 14174) )
    {
      v2 = &dword_60CA2CCC;
    }
    else
    {
      sub_60502C04(a1 + 4056, &unk_60B02F5C, 1);
      v2 = &dword_60CA2CEC;
    }
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v2);
    FIELD_U8(a1, 14178) = 0;
    return (StateMethodExecuter *)14178;
  }
  else
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 13892);
    if ( !FIELD_U8(a1, 13892) )
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 13893);
      if ( !FIELD_U8(a1, 13893) )
      {
        result = (StateMethodExecuter *)FIELD_U8(a1, 13894);
        if ( !FIELD_U8(a1, 13894) )
        {
          result = (StateMethodExecuter *)FIELD_U8(a1, 13895);
          if ( !FIELD_U8(a1, 13895) )
          {
            result = (StateMethodExecuter *)FIELD_U8(a1, 13896);
            if ( !FIELD_U8(a1, 13896) )
            {
              result = (StateMethodExecuter *)FIELD_U8(a1, 13897);
              if ( !FIELD_U8(a1, 13897) )
              {
                result = (StateMethodExecuter *)FIELD_U8(a1, 13898);
                if ( !FIELD_U8(a1, 13898) )
                {
                  result = (StateMethodExecuter *)FIELD_U8(a1, 13899);
                  if ( !FIELD_U8(a1, 13899) )
                  {
                    result = (StateMethodExecuter *)FIELD_U8(a1, 13900);
                    if ( !FIELD_U8(a1, 13900) )
                    {
                      result = (StateMethodExecuter *)FIELD_U8(a1, 13901);
                      if ( !FIELD_U8(a1, 13901) )
                      {
                        result = (StateMethodExecuter *)FIELD_U8(a1, 13902);
                        if ( !FIELD_U8(a1, 13902) )
                        {
                          result = (StateMethodExecuter *)FIELD_U8(a1, 13903);
                          if ( !FIELD_U8(a1, 13903) )
                            return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2DCC);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
