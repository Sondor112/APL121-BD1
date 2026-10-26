Function Main
    Declare Integer secretNumber, guess, attempts, bestrecord, gameloop

    Assign bestRecord = 999
    For gameloop = 1 to 3
        Assign secretNumber = Random(100)+1
        Assign attempts = 0
        Assign guess = 1
    End
    While guess != secretNumber
        Input guess
        Assign attempts = attempts + 1
        If guess > secretNumber
            Output "Их байна"
        Else
            If guess < secretNumber
                Output "Бага байна"
            End
        End
    End
    Output "Баяр хүргэе! Та" &attempts& "оролдлогоор таалаа"
    If attempts < bestRecord
        Assign bestRecord = attempts
    End
End
