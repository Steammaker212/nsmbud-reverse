/* sub_604C2C18
 * address: 0x604C2C18   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2C18(int a1)
{
  StateMethodExecuter *result; // r0

  if ( sub_604C7964(a1) == 1 )
    sub_604C6B78(a1);
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
                          return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2C4C);
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
